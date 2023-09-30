#include "CPlayerAnimState.h"

// #STR: "m_pPlayer: %p (entindex:%d)\n", "m_pPlayer: nullptr\n", "m_vLastVelocity: ( %f, %f, %f )\n", "m_flLastSimTime: %f\n", "m_vecPositionLast: ( %f, %f, %f )\n", "false", "m_bOnGround: %s\n", "m_bOnLadder: %s\n", "m_bIsJumping: %s\n", "m_bPreviousGroundState: %s\n"
void __fastcall CPlayerAnimState::PrintInfo(CBufferString *a2)
{
    m_pPlayer = this->m_pPlayer;
    if (m_pPlayer)
    {
        m_pPlayer->sub_180D9B120(&v13);
        a2->AppendFormat("m_pPlayer: %p (entindex:%d)\n", this->m_pPlayer, v13);
    }
    else
    {
        a2->Insert(*(int *)a2 & 0x3FFFFFFF, "m_pPlayer: nullptr\n", -1, 0);
    }
    a2->AppendFormat(
        "m_vLastVelocity: ( %f, %f, %f )\n",
        this->m_vLastVelocity.x,
        this->m_vLastVelocity.y,
        this->m_vLastVelocity.z);
    a2->AppendFormat("m_flLastSimTime: %f\n", this->m_flLastSimTime);
    a2->AppendFormat(
        "m_vecPositionLast: ( %f, %f, %f )\n",
        this->m_vecPositionLast.x,
        this->m_vecPositionLast.y,
        this->m_vecPositionLast.z);
    const char *v5 = "false";
    const char *v6 = "false";
    if (this->m_bOnGround)
        v6 = "true";
    a2->AppendFormat("m_bOnGround: %s\n", v6);
    const char *v7 = "false";
    if (this->m_bOnLadder)
        v7 = "true";
    a2->AppendFormat("m_bOnLadder: %s\n", v7);
    const char *v8 = "false";
    if (this->m_bIsJumping)
        v8 = "true";
    a2->AppendFormat("m_bIsJumping: %s\n", v8);
    const char *v9 = "false";
    if (this->m_bPreviousGroundState)
        v9 = "true";
    a2->AppendFormat("m_bPreviousGroundState: %s\n", v9);
    const char *v10 = "false";
    if (this->m_bPreviousLadderState)
        v10 = "true";
    a2->AppendFormat("m_bPreviousLadderState: %s\n", v10);
    a2->AppendFormat("m_flInAirSmoothValue: %f\n", this->m_flInAirSmoothValue);
    a2->AppendFormat("m_flAnimDuckAmount: %f\n", this->m_flAnimDuckAmount);
    a2->AppendFormat("m_flDuckAdditional: %f\n", this->m_flDuckAdditional);
    a2->AppendFormat("m_flLeftGroundHeight: %f\n", this->m_flLeftGroundHeight);
    a2->AppendFormat("m_flLastUpdateIncrement: %f\n", this->m_flLastUpdateIncrement);
    a2->AppendFormat("m_flLastUpdateTime: %f\n", this->m_flLastUpdateTime);
    a2->AppendFormat("m_flLastShotTime: %f\n", this->m_flLastShotTime);
    a2->AppendFormat("m_flDurationInAir: %f\n", this->m_flDurationInAir);
    a2->AppendFormat("m_flVelocityLengthZ: %f\n", this->m_flVelocityLengthZ);
    a2->AppendFormat("m_flLadderSpeed: %f\n", this->m_flLadderSpeed);
    a2->AppendFormat("m_flLadderCycle: %f\n", this->m_flLadderCycle);
    a2->AppendFormat("m_flJumpStartTime: %f\n", this->m_flJumpStartTime);
    a2->AppendFormat("m_flStand: %f\n", this->m_flStand);
    a2->AppendFormat("m_flFlashStartTime: %f\n", this->m_flFlashStartTime);
    a2->AppendFormat("m_flFlashHoldTime: %f\n", this->m_flFlashHoldTime);
    const char *v11 = "false";
    if (this->m_bFlashed)
        v11 = "true";
    a2->AppendFormat("m_bFlashed: %s\n", v11);
    const char *v12 = "false";
    if (this->m_bSetDeployOnCreation)
        v12 = "true";
    a2->AppendFormat("m_bSetDeployOnCreation: %s\n", v12);
    if (this->m_bRespawn)
        v5 = "true";
    a2->AppendFormat("m_bRespawn: %s\n", v5);
    a2->AppendFormat("m_iClip1Prev: %d\n", (unsigned int)this->m_iClip1Prev);
    a2->AppendFormat("m_mover_mode_enum: %d\n", (unsigned int)this->m_mover_mode_enum);
    a2->AppendFormat("m_flTimeLastBurned: %f\n", this->m_flTimeLastBurned);
    a2->AppendFormat("m_flTurns_TimeSinceChange: %f\n", this->m_flTurns_TimeSinceChange);
    a2->AppendFormat("m_flTurns_FacingWS: %f\n", this->m_flTurns_FacingWS);
    a2->AppendFormat("m_flLastAccelerationHeading: %f\n", this->m_flLastAccelerationHeading);
    a2->AppendFormat("m_flWasdHigh_so_scale_param2: %f\n", this->m_flWasdHigh_so_scale_param2);
    a2->AppendFormat("m_TimeSinceNoInput: %f\n", this->m_TimeSinceNoInput);
    a2->AppendFormat("m_flLastDeployTime: %f\n", this->m_flLastDeployTime);
    a2->AppendFormat("m_flMovingGunRaiseBlendValue: %f\n", this->m_flMovingGunRaiseBlendValue);
    a2->AppendFormat("m_flShootingLerpValue: %f\n", this->m_flShootingLerpValue);
    a2->AppendFormat("m_flTimeSinceLowLookAngle: %f\n", this->m_flTimeSinceLowLookAngle);
    a2->AppendFormat("m_flTimeSinceHighLookAngleEnded: %f\n", this->m_flTimeSinceHighLookAngleEnded);
}