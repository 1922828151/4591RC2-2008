/*
 * func-name: sub_100092F0
 * func-address: 0x100092f0
 * callers: none
 * callees: none
 */

int __thiscall sub_100092F0(_DWORD *this)
{
  int result; // eax
  unsigned int v2; // esi
  _DWORD *v3; // edx
  _DWORD *v4; // eax
  int v5; // edi

  result = this[2];
  v2 = 0;
  if ( *(_DWORD *)(result + 8) )
  {
    do
    {
      v3 = *(_DWORD **)(*(_DWORD *)(this[2] + 4) + 4 * v2);
      v4 = v3 + 74;
      v3[80] = v3[74];
      v5 = v3[75];
      v3 += 80;
      v3[1] = v5;
      v3[2] = v4[2];
      v3[3] = v4[3];
      v3[4] = v4[4];
      result = v4[5];
      v3[5] = result;
      ++v2;
    }
    while ( v2 < *(_DWORD *)(this[2] + 8) );
  }
  return result;
}
