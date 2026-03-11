/*
 * func-name: ??0Actor@@QAE@PAVWorld@@_N@Z
 * func-address: 0x10050e70
 * callers: 0x100dead0
 * callees: 0x10001440, 0x10011140, 0x1004f700, 0x101786e0, 0x101a251c
 */

Actor *__thiscall Actor::Actor(Actor *this, struct World *a2, bool a3)
{
  float *v4; // edi

  *((float *)this + 2) = 0.0;
  v4 = (float *)((char *)this + 8);
  *((float *)this + 3) = 0.0;
  *((float *)this + 4) = 0.0;
  *((float *)this + 6) = 0.0;
  *((float *)this + 7) = 0.0;
  *((float *)this + 8) = 0.0;
  *((float *)this + 10) = 0.0;
  *(_DWORD *)this = &Actor::`vftable';
  *((float *)this + 11) = 0.0;
  *((float *)this + 12) = 0.0;
  *((float *)this + 14) = 0.0;
  *((float *)this + 15) = 0.0;
  *((float *)this + 16) = 0.0;
  memset((char *)this + 8, 0, 0x40u);
  sub_101786E0(1.0);
  v4[15] = 1.0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  *((float *)this + 18) = 0.0;
  *((float *)this + 19) = 0.0;
  *((float *)this + 20) = 0.0;
  sub_10001440((float *)this + 26);
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 47) = 0;
  *((float *)this + 49) = 0.0;
  *((float *)this + 50) = 0.0;
  *((float *)this + 51) = 0.0;
  std::string::string((char *)this + 220);
  std::string::string((char *)this + 280);
  *((float *)this + 78) = 0.0;
  *((_DWORD *)this + 85) = 0;
  *((float *)this + 79) = 0.0;
  *((_DWORD *)this + 86) = 0;
  *((float *)this + 80) = 0.0;
  *((_DWORD *)this + 87) = 0;
  *((float *)this + 81) = 0.0;
  *((_DWORD *)this + 97) = 0;
  *((_DWORD *)this + 98) = 0;
  *((_DWORD *)this + 99) = 0;
  *((_DWORD *)this + 101) = 0;
  *((_DWORD *)this + 102) = 0;
  *((_DWORD *)this + 103) = 0;
  *((_DWORD *)this + 107) = 0;
  *((_DWORD *)this + 108) = 0;
  *((_DWORD *)this + 109) = 0;
  std::string::string((char *)this + 444);
  ScriptData::ScriptData((Actor *)((char *)this + 472));
  *((float *)this + 158) = 0.0;
  *((float *)this + 159) = 0.0;
  *((float *)this + 160) = 0.0;
  *((float *)this + 162) = 0.0;
  *((float *)this + 163) = 0.0;
  *((float *)this + 164) = 0.0;
  *((float *)this + 166) = 0.0;
  *((float *)this + 167) = 0.0;
  *((float *)this + 168) = 0.0;
  *((float *)this + 170) = 0.0;
  *((float *)this + 171) = 0.0;
  *((float *)this + 172) = 0.0;
  memset((char *)this + 632, 0, 0x40u);
  sub_101786E0(1.0);
  *((float *)this + 173) = 1.0;
  *((float *)this + 188) = 0.0;
  *((float *)this + 189) = 0.0;
  *((float *)this + 190) = 0.0;
  sub_10001440((float *)this + 192);
  *((float *)this + 211) = 0.0;
  *((float *)this + 212) = 0.0;
  *((float *)this + 213) = 0.0;
  *((float *)this + 214) = 0.0;
  *((float *)this + 215) = 0.0;
  *((float *)this + 216) = 0.0;
  *((float *)this + 217) = 0.0;
  *((float *)this + 218) = 0.0;
  *((float *)this + 219) = 0.0;
  *((float *)this + 221) = 0.0;
  *((float *)this + 222) = 0.0;
  *((float *)this + 223) = 0.0;
  *((float *)this + 225) = 0.0;
  *((float *)this + 226) = 0.0;
  *((float *)this + 227) = 0.0;
  *((float *)this + 229) = 0.0;
  *((float *)this + 230) = 0.0;
  *((float *)this + 231) = 0.0;
  memset((char *)this + 868, 0, 0x40u);
  sub_101786E0(1.0);
  *((float *)this + 232) = 1.0;
  *((float *)this + 233) = 0.0;
  *((float *)this + 234) = 0.0;
  *((float *)this + 235) = 0.0;
  *((float *)this + 236) = 0.0;
  *((float *)this + 237) = 0.0;
  *((float *)this + 238) = 0.0;
  *((float *)this + 240) = 0.0;
  *((float *)this + 241) = 0.0;
  *((float *)this + 242) = 0.0;
  *((float *)this + 244) = 0.0;
  *((float *)this + 245) = 0.0;
  *((float *)this + 246) = 0.0;
  *((float *)this + 248) = 0.0;
  *((float *)this + 249) = 0.0;
  *((float *)this + 250) = 0.0;
  memset((char *)this + 944, 0, 0x40u);
  sub_101786E0(1.0);
  *((float *)this + 251) = 1.0;
  std::string::string((char *)this + 1024);
  Actor::Initialize((GUID *)this, a2, a3);
  return this;
}
