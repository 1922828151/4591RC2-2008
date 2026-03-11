/*
 * func-name: sub_1009F9A0
 * func-address: 0x1009f9a0
 * callers: 0x1000d021
 * callees: none
 */

unsigned int __thiscall sub_1009F9A0(_DWORD *this, _DWORD *a2, unsigned int *a3)
{
  unsigned int result; // eax
  int v5; // ecx
  unsigned int v6; // edi
  int v7; // ecx

  this[33] = *a2;
  this[34] = a2[1];
  this[35] = a2[2];
  result = *a3;
  this[36] = *a3;
  this[37] = a3[1];
  v5 = this[1];
  this[38] = a3[2];
  if ( v5 )
  {
    v6 = 0;
    result = std::vector<Actor *>::size(v5);
    if ( result )
    {
      do
      {
        v7 = *(_DWORD *)std::vector<Actor *>::operator[](this[1], v6);
        if ( v7 )
          (*(void (__thiscall **)(int, _DWORD *, unsigned int *))(*(_DWORD *)v7 + 120))(v7, a2, a3);
        ++v6;
        result = std::vector<Actor *>::size(this[1]);
      }
      while ( v6 < result );
    }
  }
  return result;
}
