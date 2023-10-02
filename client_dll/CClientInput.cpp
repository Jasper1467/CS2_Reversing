#include "CClientInput.h"

#include <math.h>

// client.dll 40 53 48 83 EC 30 48 8B DA 0F 29
void __fastcall CClientInput::ClampAngles(QAngle &angViewAngles)
{
    QAngle angPitchDown = (QAngle *)sub_18105A180((__int64)&cl_pitchdown, -1);
    if (!angPitchDown)
        angPitchDown = *(QAngle **)(qword_1817E6DD0 + 8);

    float angPitchDown_Pitch = angPitchDown->pitch;

    QAngle angPitchUp = (QAngle *)sub_18105A180((__int64)&cl_pitchup, -1);
    if (!angPitchUp)
        angPitchUp = *(QAngle **)(qword_1817E6DE0 + 8);

    float flPitchClamped = -angPitchUp.pitch;
    if (angViewAngles.pitch >= flPitchClamped)
        flPitchClamped = fminf(angViewAngles.pitch, angPitchDown_Pitch);

    angViewAngles.pitch = flPitchClamped;
    roll = angViewAngles.roll;
    if (roll >= -50.0)
        angViewAngles.roll = fminf(roll, 50.0);
    else
        angViewAngles.roll = -50.0;
}