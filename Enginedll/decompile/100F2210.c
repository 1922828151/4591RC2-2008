/*
 * func-name: ?IsLooping@Model@@QAE_NH@Z
 * func-address: 0x100f2210
 * callers: none
 * callees: none
 */

bool __thiscall Model::IsLooping(Model *this, unsigned int a2)
{
  int v4; // ecx

  if ( a2 == -1 )
    return 0;
  v4 = *((_DWORD *)this + 96);
  if ( !v4 || a2 >= (*((_DWORD *)this + 97) - v4) >> 4 )
    invalid_parameter_noinfo();
  return *(_BYTE *)(16 * a2 + *((_DWORD *)this + 96));
}
