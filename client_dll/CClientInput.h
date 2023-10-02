#pragma once

struct QAngle
{
    float pitch;
    float yaw;
    float roll;
};

class CClientInput
{
public:
    void __fastcall ClampAngles(QAngle &angViewAngles);
};