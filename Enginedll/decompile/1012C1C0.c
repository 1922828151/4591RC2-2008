/*
 * func-name: ?FadeFog@SkyController@@QAEXMMMMMMM@Z
 * func-address: 0x1012c1c0
 * callers: none
 * callees: none
 */

void __thiscall SkyController::FadeFog(
        SkyController *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8)
{
  double v8; // st6

  *((_BYTE *)this + 3724) = 0;
  if ( a8 == 0.0 )
  {
    *((float *)this + 941) = a2;
    *((float *)this + 940) = a3;
    *((float *)this + 942) = a4;
    *((float *)this + 943) = a5;
    *((float *)this + 944) = a6;
    *((float *)this + 945) = a7;
  }
  else
  {
    v8 = a8 / *((float *)this + 947);
    *((_BYTE *)this + 3724) = 1;
    *((float *)this + 938) = v8;
    *((float *)this + 939) = 0.0;
    *((float *)this + 932) = a5 - *((float *)this + 943);
    *((float *)this + 933) = a6 - *((float *)this + 944);
    *((float *)this + 934) = a7 - *((float *)this + 945);
    *((float *)this + 935) = a2 - *((float *)this + 941);
    *((float *)this + 936) = a3 - *((float *)this + 940);
    *((float *)this + 937) = a4 - *((float *)this + 942);
  }
}
