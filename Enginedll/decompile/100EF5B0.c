/*
 * func-name: ??0StaticModel@@QAE@XZ
 * func-address: 0x100ef5b0
 * callers: 0x100f2ca0
 * callees: 0x10001370, 0x10001440, 0x101786e0, 0x1017a0b0, 0x101a251c
 */

StaticModel *__thiscall StaticModel::StaticModel(StaticModel *this)
{
  _DWORD *v2; // ebp
  float *v3; // eax
  int v4; // edx
  float *v5; // eax
  int v6; // edx
  float v8; // [esp+18h] [ebp-4Ch] BYREF
  float v9; // [esp+1Ch] [ebp-48h]
  float v10; // [esp+20h] [ebp-44h]
  float v11; // [esp+24h] [ebp-40h] BYREF
  float v12; // [esp+28h] [ebp-3Ch]
  float v13; // [esp+2Ch] [ebp-38h]
  float v14[10]; // [esp+30h] [ebp-34h] BYREF
  int v15; // [esp+60h] [ebp-4h]

  v2 = (_DWORD *)((char *)this + 12);
  *(_DWORD *)this = &StaticModel::`vftable';
  sub_10001440((float *)this + 3);
  v15 = 0;
  sub_10001440((float *)this + 15);
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 33) = 0;
  *((float *)this + 37) = 0.0;
  *((float *)this + 38) = 0.0;
  *((float *)this + 39) = 0.0;
  *((float *)this + 41) = 0.0;
  *((float *)this + 42) = 0.0;
  *((float *)this + 43) = 0.0;
  *((float *)this + 45) = 0.0;
  *((float *)this + 46) = 0.0;
  *((float *)this + 47) = 0.0;
  *((float *)this + 49) = 0.0;
  *((float *)this + 50) = 0.0;
  *((float *)this + 51) = 0.0;
  memset((char *)this + 148, 0, 0x40u);
  sub_101786E0(1.0);
  *((float *)this + 52) = 1.0;
  *((float *)this + 56) = 0.0;
  *((float *)this + 57) = 0.0;
  *((float *)this + 58) = 0.0;
  *((float *)this + 60) = 0.0;
  *((float *)this + 61) = 0.0;
  *((float *)this + 62) = 0.0;
  *((float *)this + 64) = 0.0;
  *((float *)this + 65) = 0.0;
  *((float *)this + 66) = 0.0;
  *((float *)this + 68) = 0.0;
  *((float *)this + 69) = 0.0;
  *((float *)this + 70) = 0.0;
  memset((char *)this + 224, 0, 0x40u);
  sub_101786E0(1.0);
  *((float *)this + 71) = 1.0;
  *((_DWORD *)this + 73) = 0;
  *((_DWORD *)this + 74) = 0;
  *((_DWORD *)this + 75) = 0;
  std::string::string((char *)this + 320);
  std::string::string((char *)this + 348);
  *((float *)this + 54) = 500.0;
  *((float *)this + 53) = 0.0;
  *((float *)this + 13) = 1.0;
  LOBYTE(v15) = 6;
  *((_DWORD *)this + 25) = -1;
  *((_DWORD *)this + 35) = 0;
  v8 = 0.0;
  *((_DWORD *)this + 77) = 0;
  v9 = 0.0;
  *((_DWORD *)this + 2) = 0;
  v10 = 0.0;
  *((_DWORD *)this + 55) = 0;
  v11 = 0.0;
  *((_DWORD *)this + 76) = 0;
  v12 = 0.0;
  *((_BYTE *)this + 136) = 1;
  v13 = 0.0;
  *((_BYTE *)this + 56) = 0;
  v3 = sub_10001370(v14, &v11, &v8);
  v2[1] = *((_DWORD *)v3 + 1);
  v2[2] = *((_DWORD *)v3 + 2);
  v2[3] = *((_DWORD *)v3 + 3);
  v2[4] = *((_DWORD *)v3 + 4);
  v2[5] = *((_DWORD *)v3 + 5);
  v2[6] = *((_DWORD *)v3 + 6);
  v4 = *((_DWORD *)v3 + 7);
  v3 += 7;
  v2 += 7;
  *v2 = v4;
  v2[1] = *((_DWORD *)v3 + 1);
  v2[2] = *((_DWORD *)v3 + 2);
  sub_1017A0B0(v14);
  v11 = 1.0;
  v12 = 1.0;
  v13 = 1.0;
  v8 = -1.0;
  v9 = -1.0;
  v10 = -1.0;
  v5 = sub_10001370(v14, &v8, &v11);
  *((float *)this + 16) = v5[1];
  *((float *)this + 17) = v5[2];
  *((float *)this + 18) = v5[3];
  *((float *)this + 19) = v5[4];
  *((float *)this + 20) = v5[5];
  *((float *)this + 21) = v5[6];
  v6 = *((_DWORD *)v5 + 7);
  v5 += 7;
  *((_DWORD *)this + 22) = v6;
  *((float *)this + 23) = v5[1];
  *((float *)this + 24) = v5[2];
  sub_1017A0B0(v14);
  *((_BYTE *)this + 315) = 0;
  *((_BYTE *)this + 312) = 0;
  *((_BYTE *)this + 314) = 0;
  *((_BYTE *)this + 139) = 0;
  *((_BYTE *)this + 138) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_BYTE *)this + 313) = 1;
  *((_BYTE *)this + 137) = 1;
  return this;
}
