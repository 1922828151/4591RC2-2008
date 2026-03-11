/*
 * func-name: ?AddKeyframe@Light@@QAEXABVLightState@@M_N@Z
 * func-address: 0x100df700
 * callers: none
 * callees: 0x100956d0, 0x100e0a90, 0x100e0d40
 */

void __thiscall Light::AddKeyframe(Light *this, const struct LightState *a2, float a3, bool a4)
{
  int v5; // eax
  double v6; // st7
  double v7; // st6
  bool v8; // c0
  bool v9; // c3

  if ( -1.0 == *((float *)a2 + 9) )
  {
    if ( !*((_BYTE *)this + 1053) )
    {
      v5 = *((_DWORD *)this + 288);
      if ( v5 )
      {
        if ( (*((_DWORD *)this + 289) - v5) / 72 )
          Error("Light::AddKeyFrame: You used a mix of keyframes with and without positions\n"
                "\t\t\t\t  This is not allowed, please use no keyframe positions (and let the engine use the light actor'"
                "s position, \t\t\t\t  or use all keyframe positions");
      }
    }
    *((_BYTE *)this + 1053) = 1;
  }
  sub_100E0D40((int)this + 1148, a2);
  sub_100E0A90((int)this + 1164, (int)&a3);
  v6 = a3;
  v7 = *((float *)this + 295);
  v8 = v7 < a3;
  v9 = v7 == a3;
  *((_BYTE *)this + 1188) = a4;
  *((_BYTE *)this + 1189) = 1;
  if ( v8 || v9 )
    *((float *)this + 295) = v6;
  else
    Error(
      "Light::AddKeyframe() Keyframe added at time index that is < the previous keyframe time\n"
      "Previous keyframe was at %fMS, requested one is %fMS",
      *((float *)this + 295),
      v6);
}
