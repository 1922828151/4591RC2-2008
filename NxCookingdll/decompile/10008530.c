/*
 * func-name: sub_10008530
 * func-address: 0x10008530
 * callers: 0x10009820, 0x1000bf10
 * callees: none
 */

int __thiscall sub_10008530(_DWORD *this)
{
  unsigned int i; // ebp
  int v3; // eax
  _DWORD *v4; // edi
  int result; // eax

  this[53] = 0;
  this[51] = 0;
  this[52] = 0;
  this[2] = this[1];
  this[42] = this[41];
  this[17] = this[16];
  this[7] = this[6];
  this[12] = this[11];
  this[47] = this[46];
  for ( i = 0; i < (this[32] - this[31]) >> 2; ++i )
  {
    v3 = this[31] + 4 * i;
    if ( *(_DWORD *)v3 )
    {
      v4 = *(_DWORD **)v3;
      if ( *(_DWORD *)(*(_DWORD *)v3 + 24) )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v4[6]);
      v4[6] = 0;
      v4[7] = 0;
      v4[8] = 0;
      if ( v4[1] )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v4[1]);
      v4[1] = 0;
      v4[2] = 0;
      v4[3] = 0;
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v4);
      *(_DWORD *)(this[31] + 4 * i) = 0;
    }
  }
  result = this[31];
  this[32] = result;
  this[22] = this[21];
  this[27] = this[26];
  return result;
}
