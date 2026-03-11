/*
 * func-name: sub_10014550
 * func-address: 0x10014550
 * callers: 0x100125f0, 0x10014260
 * callees: none
 */

int __userpurge sub_10014550@<eax>(int a1@<edi>, int a2)
{
  std::string::string(a2, a1);
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 28);
  return a2;
}
