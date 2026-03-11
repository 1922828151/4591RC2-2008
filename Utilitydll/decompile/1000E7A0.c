/*
 * func-name: ?set_all_protepoty@Binary_Stream@Utility@Outpop@@QAEXAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@23@@Z
 * func-address: 0x1000e7a0
 * callers: none
 * callees: none
 */

int __thiscall Outpop::Utility::Binary_Stream::set_all_protepoty(int this, int *a2)
{
  int result; // eax

  *(_DWORD *)(this + 52) = *(_DWORD *)(*a2 + 52);
  *(_BYTE *)(this + 48) = *(_BYTE *)(*a2 + 48);
  *(_WORD *)(this + 50) = *(_WORD *)(*a2 + 50);
  *(_DWORD *)(this + 44) = *(_DWORD *)(*a2 + 44);
  *(_DWORD *)(this + 40) = *(_DWORD *)(*a2 + 40);
  *(_DWORD *)(this + 56) = *(_DWORD *)(*a2 + 56);
  *(_DWORD *)(this + 64) = *(_DWORD *)(*a2 + 64);
  result = *a2;
  *(_DWORD *)(this + 60) = *(_DWORD *)(*a2 + 60);
  return result;
}
