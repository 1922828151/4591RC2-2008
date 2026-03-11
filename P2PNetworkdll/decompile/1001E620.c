/*
 * func-name: sub_1001E620
 * func-address: 0x1001e620
 * callers: 0x1001e800
 * callees: none
 */

int __cdecl sub_1001E620(int a1, int a2)
{
  int v2; // eax

  v2 = (*(int (__cdecl **)(_DWORD, int))(a1 + 364))(*(_DWORD *)(a1 + 368), a2);
  if ( (v2 & 0xFFFF0000) != 0 )
    return 0;
  else
    return (1 << (v2 & 0x1F)) & dword_10027F10[8 * (unsigned __int8)byte_10028410[v2 >> 8] + ((v2 >> 5) & 7)];
}
