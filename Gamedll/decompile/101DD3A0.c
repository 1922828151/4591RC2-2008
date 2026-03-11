/*
 * func-name: sub_101DD3A0
 * func-address: 0x101dd3a0
 * callers: 0x1000ed09
 * callees: none
 */

char sub_101DD3A0()
{
  int v0; // ecx
  int v1; // esi
  Input *v2; // eax
  char result; // al
  int v4; // ecx
  int v5; // eax

  (*(void (__thiscall **)(int))(*(_DWORD *)dword_103B6670 + 16))(dword_103B6670);
  if ( (dword_103B6668 & 1) == 0 )
  {
    dword_103B6668 |= 1u;
    v0 = *(_DWORD *)(dword_103B67B4 + 8);
    v1 = dword_103B67B4 + 8;
    if ( !v0 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v0) >> 2) <= 0x50 )
      _invalid_parameter_noinfo();
    dword_103B6664 = *(_DWORD *)(*(_DWORD *)v1 + 320);
  }
  v2 = (Input *)Input::Instance(dword_103B6664);
  result = Input::ControlJustPressed(v2);
  if ( result )
  {
    v5 = RenderDevice::Instance(v4);
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 344))(v5, 0);
  }
  return result;
}
