/*
 * func-name: ?GetCameraPointMatrix@Establishment@GameClient@@QAE?AVMatrix@@K@Z_0
 * func-address: 0x101a2690
 * callers: 0x1000b3fc
 * callees: 0x10008d64
 */

float *__thiscall GameClient::Establishment::GetCameraPointMatrix(_DWORD *this, float *a2, unsigned int a3)
{
  unsigned int i; // esi
  int v5; // ecx
  int v6; // ecx
  _DWORD *v7; // esi
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  float *result; // eax
  _DWORD v12[16]; // [esp+10h] [ebp-40h] BYREF

  for ( i = 0; ; ++i )
  {
    v5 = this[49];
    if ( !v5 || i >= (this[50] - v5) >> 2 )
      break;
    if ( GameClient::Seat::IsWeaponInSeat(*(GameClient::Seat **)(this[49] + 4 * i), a3) )
    {
      v6 = this[57];
      if ( v6 && i < (this[58] - v6) >> 2 )
      {
        v7 = (_DWORD *)(*(_DWORD *)(this[57] + 4 * i) + 164);
        goto LABEL_10;
      }
      break;
    }
  }
  v8 = this[6];
  v9 = this[7];
  qmemcpy(v12, this + 9, sizeof(v12));
  v10 = this[8];
  v12[12] = v8;
  v12[13] = v9;
  v12[14] = v10;
  v7 = v12;
LABEL_10:
  result = a2;
  *a2 = 0.0;
  a2[1] = 0.0;
  a2[2] = 0.0;
  a2[4] = 0.0;
  a2[5] = 0.0;
  a2[6] = 0.0;
  a2[8] = 0.0;
  a2[9] = 0.0;
  a2[10] = 0.0;
  a2[12] = 0.0;
  a2[13] = 0.0;
  a2[14] = 0.0;
  qmemcpy(a2, v7, 0x40u);
  return result;
}
