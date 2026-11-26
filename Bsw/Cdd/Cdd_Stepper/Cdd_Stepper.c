/*
 * Cdd_Stepper.c
 *
 * 역할: 스텝 모터 CDD 구현.
 *

 */

#include "Cdd_Stepper.h"
#include "Dio.h"
#include "Platform_Types.h"
#include "Std_Types.h"

static const Dio_LevelType Step_table[4][4] = {
    {1,0,0,0},
    {0,1,0,0},
    {0,0,1,0},
    {0,0,0,1}
};

static uint8 Cdd_Stepper_Table_Index = 0;
static uint32 Cdd_Stepper_Remain_Cycle = 0;
static Cdd_Stepper_DirectionType Cdd_Stepper_dir = CDD_STEPPER_CW; 

static const uint8 Cdd_Stepper_Channel_Table[4] = {
    DioConf_DioChannel_STEP_IN1, DioConf_DioChannel_STEP_IN2, 
    DioConf_DioChannel_STEP_IN3, DioConf_DioChannel_STEP_IN4
};


 /// @brief 내부 상태를 초기화하고 코일 4개를 모두 LOW로 만든다
 void Cdd_Stepper_Init(void){
    Cdd_Stepper_Table_Index = 0;
    Cdd_Stepper_Remain_Cycle = 0;
    Cdd_Stepper_dir = CDD_STEPPER_CW;

    Dio_WriteChannel(DioConf_DioChannel_STEP_IN1, STD_LOW);
    Dio_WriteChannel(DioConf_DioChannel_STEP_IN2, STD_LOW);
    Dio_WriteChannel(DioConf_DioChannel_STEP_IN3, STD_LOW);
    Dio_WriteChannel(DioConf_DioChannel_STEP_IN4, STD_LOW);

    return;
 }

 
 void Cdd_Stepper_Move(uint32 step, Cdd_Stepper_DirectionType dir){
    Cdd_Stepper_Remain_Cycle = step;
    Cdd_Stepper_dir = dir;
    return;
 }


void Cdd_Stepper_MainFunction(void){
    if(Cdd_Stepper_Remain_Cycle == 0) return;
    for(int i=0; i<4; i++){
        Dio_WriteChannel(Cdd_Stepper_Channel_Table[i], Step_table[Cdd_Stepper_Table_Index][i]);
    }
    Cdd_Stepper_Remain_Cycle = Cdd_Stepper_Remain_Cycle - 1;

    if(Cdd_Stepper_dir == CDD_STEPPER_CW){
        Cdd_Stepper_Table_Index = (Cdd_Stepper_Table_Index + 1) % 4;
    }
    else{
        Cdd_Stepper_Table_Index = (Cdd_Stepper_Table_Index + 3) % 4;
    }

    if(Cdd_Stepper_Remain_Cycle == 0){
        Dio_WriteChannel(DioConf_DioChannel_STEP_IN1, STD_LOW);
        Dio_WriteChannel(DioConf_DioChannel_STEP_IN2, STD_LOW);
        Dio_WriteChannel(DioConf_DioChannel_STEP_IN3, STD_LOW);
        Dio_WriteChannel(DioConf_DioChannel_STEP_IN4, STD_LOW);
    }
}