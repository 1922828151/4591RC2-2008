/*
 * func-name: sub_100BDDE0
 * func-address: 0x100bdde0
 * callers: 0x10019e93
 * callees: 0x1001a988
 */

int __thiscall sub_100BDDE0(int this, struct Actor *a2, bool a3)
{
  int result; // eax

  Effect_Base::Clone((Effect_Base *)this, a2, a3);
  std::string::operator=(*((_DWORD *)a2 + 284) + 100, *(_DWORD *)(this + 1136) + 100);
  result = std::string::operator=(*((_DWORD *)a2 + 285) + 100, *(_DWORD *)(this + 1140) + 100);
  *((float *)a2 + 286) = *(float *)(this + 1144);
  *((float *)a2 + 287) = *(float *)(this + 1148);
  *((float *)a2 + 288) = *(float *)(this + 1152);
  *((float *)a2 + 289) = *(float *)(this + 1156);
  *((float *)a2 + 290) = *(float *)(this + 1160);
  *((float *)a2 + 291) = *(float *)(this + 1164);
  *((float *)a2 + 292) = *(float *)(this + 1168);
  *((float *)a2 + 293) = *(float *)(this + 1172);
  *((float *)a2 + 294) = *(float *)(this + 1176);
  *((float *)a2 + 295) = *(float *)(this + 1180);
  *((float *)a2 + 296) = *(float *)(this + 1184);
  *((float *)a2 + 297) = *(float *)(this + 1188);
  *((float *)a2 + 298) = *(float *)(this + 1192);
  return result;
}
