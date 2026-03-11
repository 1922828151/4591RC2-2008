/*
 * func-name: ?Tick@HUDSystem@@QAEXXZ_0
 * func-address: 0x100f0be0
 * callers: 0x1000fed4
 * callees: none
 */

void __thiscall HUDSystem::Tick(HUDSystem *this)
{
  int *v1; // esi
  int **v2; // edi

  if ( *(_BYTE *)this )
  {
    v1 = (int *)**((_DWORD **)this + 2);
    v2 = (int **)((char *)this + 4);
    while ( v1 != v2[1] )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v1[2] + 4))(v1[2]);
      if ( v1 == v2[1] )
        _invalid_parameter_noinfo();
      v1 = (int *)*v1;
    }
  }
}
