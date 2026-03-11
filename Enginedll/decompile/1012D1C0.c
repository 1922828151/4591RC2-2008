/*
 * func-name: ?GetBiasFogStart@SkyController@@QAEMXZ
 * func-address: 0x1012d1c0
 * callers: none
 * callees: 0x1000b770
 */

double __thiscall SkyController::GetBiasFogStart(SkyController *this)
{
  int *v1; // eax
  float v3; // [esp+4h] [ebp-Ch]
  char *v4; // [esp+8h] [ebp-8h] BYREF
  int v5; // [esp+Ch] [ebp-4h]

  v1 = (int *)*((_DWORD *)this + 321);
  v3 = 1.0;
  v5 = *v1;
  v4 = (char *)this + 1280;
  if ( (int *)v5 != v1 )
  {
    if ( v5 == *((_DWORD *)this + 321) )
      invalid_parameter_noinfo();
    v3 = *(float *)(v5 + 40);
    sub_1000B770(&v4);
  }
  return v3;
}
