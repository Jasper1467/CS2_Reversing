#pragma once

#include "CBufferString.h"

struct Vector
{
    float x;
    float y;
    float z;
};

class __fastcall CPlayerAnimState
{
public:
    int vtable;
    void *m_pPlayer;
    char pad[80];
    Vector m_vLastVelocity;
    float m_flLastSimTime;
    Vector m_vecPositionLast;
    bool m_bOnGround;
    bool m_bOnLadder;
    bool m_bIsJumping;
    bool m_bPreviousGroundState;
    bool m_bPreviousLadderState;
    float m_flInAirSmoothValue;
    float m_flAnimDuckAmount;
    float m_flDuckAdditional;
    float m_flLeftGroundHeight;
    float m_flLastUpdateIncrement;
    float m_flLastUpdateTime;
    float m_flLastShotTime;
    float m_flDurationInAir;
    float m_flVelocityLengthZ;
    float m_flLadderSpeed;
    float m_flLadderCycle;
    float m_flJumpStartTime;
    float m_flStand;
    float m_flFlashStartTime;
    float m_flFlashHoldTime;
    bool m_bFlashed;
    bool m_bSetDeployOnCreation;
    bool m_bRespawn;
    int m_iClip1Prev;
    double m_mover_mode_enum;
    float m_flTimeLastBurned;
    char pad2[4];
    float m_flTurns_TimeSinceChange;
    float m_flTurns_FacingWS;
    float m_flLastAccelerationHeading;
    float m_flWasdHigh_so_scale_param2;
    float m_TimeSinceNoInput;
    float m_flLastDeployTime;
    char pad3[4];
    float m_flMovingGunRaiseBlendValue;
    float m_flShootingLerpValue;
    float m_flTimeSinceLowLookAngle;
    float m_flTimeSinceHighLookAngleEnded;

    void PrintInfo(CBufferString *a2);
};