/*
 * func-name: ?GetDuration@Model@@QAEMH@Z
 * func-address: 0x100f2150
 * callers: none
 * callees: none
 */

double __thiscall Model::GetDuration(Model *this, unsigned int a2)
{
  int v4; // ecx

  if ( a2 == -1 )
    return 0.0;
  v4 = *((_DWORD *)this + 96);
  if ( !v4 || a2 >= (*((_DWORD *)this + 97) - v4) >> 4 )
    invalid_parameter_noinfo();
  return *(float *)(16 * a2 + *((_DWORD *)this + 96) + 4);
}
