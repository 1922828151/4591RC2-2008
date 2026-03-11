/*
 * func-name: sub_10008620
 * func-address: 0x10008620
 * callers: 0x10024d80, 0x10024f00
 * callees: none
 */

int __thiscall sub_10008620(_DWORD *this)
{
  unsigned int i; // ebp
  int v3; // eax
  _DWORD *v4; // edi
  int result; // eax

  *this = &ClothMesh::`vftable';
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
  if ( this[46] )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[46]);
  this[46] = 0;
  this[47] = 0;
  this[48] = 0;
  if ( this[41] )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[41]);
  this[41] = 0;
  this[42] = 0;
  this[43] = 0;
  if ( this[36] )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[36]);
  this[36] = 0;
  this[37] = 0;
  this[38] = 0;
  if ( this[31] )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[31]);
  this[31] = 0;
  this[32] = 0;
  this[33] = 0;
  if ( this[26] )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[26]);
  this[26] = 0;
  this[27] = 0;
  this[28] = 0;
  if ( this[21] )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[21]);
  this[21] = 0;
  this[22] = 0;
  this[23] = 0;
  if ( this[16] )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[16]);
  this[16] = 0;
  this[17] = 0;
  this[18] = 0;
  if ( this[11] )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[11]);
  this[11] = 0;
  this[12] = 0;
  this[13] = 0;
  if ( this[6] )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[6]);
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  result = this[1];
  if ( result )
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[1]);
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  return result;
}
