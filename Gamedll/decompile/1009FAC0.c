/*
 * func-name: sub_1009FAC0
 * func-address: 0x1009fac0
 * callers: 0x1001a5d2
 * callees: none
 */

void __thiscall sub_1009FAC0(int this, int a2)
{
  int v3; // ecx
  unsigned int v4; // edi
  int v5; // ecx

  v3 = *(_DWORD *)(this + 4);
  *(_BYTE *)(this + 156) = a2;
  if ( v3 )
  {
    v4 = 0;
    if ( std::vector<Actor *>::size(v3) )
    {
      do
      {
        v5 = *(_DWORD *)std::vector<Actor *>::operator[](*(_DWORD *)(this + 4), v4);
        if ( v5 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 124))(v5, a2);
        ++v4;
      }
      while ( v4 < std::vector<Actor *>::size(*(_DWORD *)(this + 4)) );
    }
  }
}
