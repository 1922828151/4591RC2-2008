/*
 * func-name: sub_100BD100
 * func-address: 0x100bd100
 * callers: 0x10012382
 * callees: 0x1001a988
 */

int __thiscall sub_100BD100(int this, struct Actor *a2, bool a3)
{
  int result; // eax

  Effect_Base::Clone((Effect_Base *)this, a2, a3);
  result = std::string::operator=(*((_DWORD *)a2 + 284) + 100, *(_DWORD *)(this + 1136) + 100);
  *((float *)a2 + 285) = *(float *)(this + 1140);
  *((float *)a2 + 291) = *(float *)(this + 1164);
  *((float *)a2 + 287) = *(float *)(this + 1148);
  *((float *)a2 + 288) = *(float *)(this + 1152);
  *((_BYTE *)a2 + 1160) = *(_BYTE *)(this + 1160);
  return result;
}
