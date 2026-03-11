/*
 * func-name: sub_10060640
 * func-address: 0x10060640
 * callers: none
 * callees: 0x100624c0
 */

int __thiscall sub_10060640(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int result; // eax
  int v4; // ecx
  float *v5; // edx
  float *v6; // edx

  v2 = this + 5;
  result = (unsigned __int16)sub_100624C0(this + 5);
  v4 = 44 * (unsigned __int16)result;
  *(_WORD *)(v4 + *v2 + 12) = -1;
  *(_DWORD *)(v4 + *v2 + 4) = a2;
  *(_DWORD *)(v4 + *v2 + 8) = 0;
  v5 = (float *)(v4 + *v2 + 16);
  *v5 = 3.4028235e38;
  v5[1] = 3.4028235e38;
  v5[2] = 3.4028235e38;
  v6 = (float *)(v4 + *v2 + 28);
  *v6 = 1.1754944e-38;
  v6[1] = 1.1754944e-38;
  v6[2] = 1.1754944e-38;
  *(_DWORD *)(v4 + *v2) = -1;
  return result;
}
