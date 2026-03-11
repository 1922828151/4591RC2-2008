/*
 * func-name: sub_10038670
 * func-address: 0x10038670
 * callers: 0x1000a9de
 * callees: none
 */

float *__thiscall sub_10038670(_DWORD *this)
{
  float *result; // eax
  _DWORD *v2; // esi
  _DWORD *v3; // ecx

  result = (float *)this;
  v2 = this + 1;
  v3 = this + 4;
  *v2 = &GameClient::FSM::`vftable';
  *v3 = &GameClient::FSMStateT<GameClient::FSM>::`vftable';
  v3[1] = v2;
  v3[2] = &sub_10011D8D;
  v3[3] = &sub_100122D8;
  v3[4] = &sub_1000DAE4;
  v3[5] = 0;
  v2[1] = v3;
  v2[2] = 0;
  *v2 = &GameClient::AISingleBrain::`vftable';
  *(_DWORD *)result = &GameClient::AISingleBrain::`vftable';
  *((_DWORD *)result + 10) = &GameClient::FSMStateT<GameClient::AISingleBrain>::`vftable';
  *((_DWORD *)result + 20) = &GameClient::FSMStateT<GameClient::AISingleBrain>::`vftable';
  *((_DWORD *)result + 30) = &GameClient::FSMStateT<GameClient::AISingleBrain>::`vftable';
  *((_DWORD *)result + 40) = &GameClient::FSMStateT<GameClient::AISingleBrain>::`vftable';
  *((_DWORD *)result + 50) = &GameClient::FSMStateT<GameClient::AISingleBrain>::`vftable';
  *((_DWORD *)result + 60) = &GameClient::FSMStateT<GameClient::AISingleBrain>::`vftable';
  result[71] = 0.0;
  result[72] = 0.0;
  result[73] = 0.0;
  result[74] = 0.0;
  result[86] = 0.0;
  result[80] = 0.0;
  result[87] = 0.0;
  result[81] = 0.0;
  result[88] = 0.0;
  result[82] = 0.0;
  result[91] = 0.0;
  result[75] = 0.0;
  result[92] = 0.0;
  result[76] = 0.0;
  result[93] = 0.0;
  result[97] = 0.0;
  result[98] = 0.0;
  result[99] = 0.0;
  *((_DWORD *)result + 12) = sub_1000B76C;
  result[13] = 0.0;
  *((_DWORD *)result + 14) = sub_100144F7;
  result[15] = 0.0;
  result[17] = 0.0;
  *((_DWORD *)result + 16) = j_nullsub_70;
  *((_DWORD *)result + 18) = &sub_100030C6;
  *((_DWORD *)result + 11) = result;
  result[19] = 0.0;
  *((_DWORD *)result + 22) = &sub_10002B62;
  result[23] = 0.0;
  *((_DWORD *)result + 24) = &sub_10011338;
  *((_DWORD *)result + 26) = j_nullsub_71;
  *((_DWORD *)result + 21) = result;
  result[25] = 0.0;
  result[27] = 0.0;
  *((_DWORD *)result + 28) = j_nullsub_72;
  *((_DWORD *)result + 29) = 4;
  *((_DWORD *)result + 31) = result;
  *((_DWORD *)result + 32) = &sub_10016C25;
  result[33] = 0.0;
  *((_DWORD *)result + 34) = sub_10013BC4;
  result[35] = 0.0;
  result[39] = 0.0;
  *((_DWORD *)result + 36) = &sub_1000A3BC;
  result[37] = 0.0;
  *((_DWORD *)result + 38) = sub_10015D9D;
  result[49] = 0.0;
  *((_DWORD *)result + 41) = result;
  *((_DWORD *)result + 42) = sub_10001A8C;
  result[43] = 0.0;
  *((_DWORD *)result + 44) = sub_10018FE8;
  result[45] = 0.0;
  *((_DWORD *)result + 46) = &sub_10009E30;
  result[47] = 0.0;
  *((_DWORD *)result + 48) = sub_10017B7F;
  *((_DWORD *)result + 52) = &sub_100046A6;
  result[53] = 0.0;
  result[59] = 0.0;
  *((_DWORD *)result + 51) = result;
  *((_DWORD *)result + 56) = &sub_10006F7D;
  *((_DWORD *)result + 54) = sub_10014F06;
  result[55] = 0.0;
  result[57] = 0.0;
  *((_DWORD *)result + 58) = sub_100083D2;
  result[63] = 0.0;
  *((_DWORD *)result + 64) = &sub_1001A186;
  *((_DWORD *)result + 61) = result;
  *((_DWORD *)result + 62) = &sub_1000B5B4;
  result[65] = 0.0;
  *((_DWORD *)result + 66) = &sub_1000D2C4;
  result[67] = 0.0;
  *((_DWORD *)result + 68) = j_nullsub_72;
  *((_DWORD *)result + 69) = 4;
  *((_DWORD *)result + 3) = result + 60;
  return result;
}
