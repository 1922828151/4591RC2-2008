/*
 * func-name: sub_100436E0
 * func-address: 0x100436e0
 * callers: 0x1000466a
 * callees: none
 */

int __thiscall sub_100436E0(int this, float a2)
{
  int v3; // ecx

  if ( *(_DWORD *)(this + 8) )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 8))(*(_DWORD *)(this + 4));
    v3 = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 4) = v3;
    *(_DWORD *)(this + 8) = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
  }
  return (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(this + 4) + 12))(LODWORD(a2));
}
