/*
 * func-name: sub_1009FA30
 * func-address: 0x1009fa30
 * callers: 0x1000ea57
 * callees: none
 */

void __thiscall sub_1009FA30(int this, float a2)
{
  int v3; // ecx
  unsigned int v4; // esi
  int v5; // ecx

  if ( a2 <= 1.0 )
  {
    if ( a2 < 0.0 )
      a2 = 0.0;
  }
  else
  {
    a2 = 1.0;
  }
  v3 = *(_DWORD *)(this + 4);
  *(float *)(this + 120) = a2;
  if ( v3 )
  {
    v4 = 0;
    if ( std::vector<Actor *>::size(v3) )
    {
      do
      {
        v5 = *(_DWORD *)std::vector<Actor *>::operator[](*(_DWORD *)(this + 4), v4);
        if ( v5 )
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v5 + 116))(LODWORD(a2));
        ++v4;
      }
      while ( v4 < std::vector<Actor *>::size(*(_DWORD *)(this + 4)) );
    }
  }
}
