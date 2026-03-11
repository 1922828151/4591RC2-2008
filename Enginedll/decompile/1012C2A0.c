/*
 * func-name: ?FadeSky@SkyController@@QAEXHMM@Z
 * func-address: 0x1012c2a0
 * callers: none
 * callees: none
 */

void __thiscall SkyController::FadeSky(SkyController *this, int a2, float a3, float a4)
{
  float *v4; // edx

  v4 = (float *)((char *)this + 16 * a2);
  *((_BYTE *)v4 + 3832) = 0;
  if ( a4 == 0.0 )
  {
    *((float *)this + a2 + 266) = a3;
  }
  else
  {
    *((_BYTE *)v4 + 3832) = 1;
    v4[961] = a4 / *((float *)this + 947);
    v4[959] = a3 - *((float *)this + a2 + 266);
    *((float *)this + 4 * a2 + 960) = 0.0;
  }
}
