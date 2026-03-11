/*
 * func-name: ?GetRemaining@Model@@QAEMH@Z
 * func-address: 0x100f21a0
 * callers: none
 * callees: none
 */

double __thiscall Model::GetRemaining(Model *this, unsigned int a2)
{
  int v4; // ecx
  double v5; // [esp+8h] [ebp-8h]

  if ( a2 == -1 )
    return 0.0;
  v4 = *((_DWORD *)this + 96);
  if ( !v4 || a2 >= (*((_DWORD *)this + 97) - v4) >> 4 )
    invalid_parameter_noinfo();
  v5 = *(float *)(*((_DWORD *)this + 96) + 16 * a2 + 8);
  return (float)(v5 - ((double (__stdcall *)(_DWORD))*(_DWORD *)(**((_DWORD **)this + 94) + 60))(*((_DWORD *)this + 94)));
}
