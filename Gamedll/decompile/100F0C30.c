/*
 * func-name: ?PostRender@HUDSystem@@QAEXPAVCamera@@@Z_0
 * func-address: 0x100f0c30
 * callers: 0x10009a39
 * callees: none
 */

void __thiscall HUDSystem::PostRender(HUDSystem *this, struct Camera *a2)
{
  int *v2; // esi
  int **v3; // edi

  if ( *(_BYTE *)this )
  {
    v2 = (int *)**((_DWORD **)this + 2);
    v3 = (int **)((char *)this + 4);
    while ( v2 != v3[1] )
    {
      (*(void (__thiscall **)(int, struct Camera *))(*(_DWORD *)v2[2] + 8))(v2[2], a2);
      if ( v2 == v3[1] )
        _invalid_parameter_noinfo();
      v2 = (int *)*v2;
    }
  }
}
