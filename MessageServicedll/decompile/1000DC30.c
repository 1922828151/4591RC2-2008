/*
 * func-name: sub_1000DC30
 * func-address: 0x1000dc30
 * callers: 0x1000c320
 * callees: 0x10002c00, 0x1000ba00
 */

int __usercall sub_1000DC30@<eax>(_DWORD *a1@<eax>, _DWORD *a2@<ebx>)
{
  int v2; // esi
  _DWORD *v3; // edi
  int result; // eax

  v2 = a2[1];
  v3 = sub_10002C00(v2, *(_DWORD *)(v2 + 4), a1);
  result = sub_1000BA00(a2);
  *(_DWORD *)(v2 + 4) = v3;
  *(_DWORD *)v3[1] = v3;
  return result;
}
