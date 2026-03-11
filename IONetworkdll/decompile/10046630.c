/*
 * func-name: sub_10046630
 * func-address: 0x10046630
 * callers: 0x10042a80
 * callees: 0x10049340, 0x10049f60, 0x1004a040
 */

int __stdcall sub_10046630(int a1, int a2)
{
  int v2; // esi

  v2 = a1;
  sub_10049F60(a1, &a1);
  *(_DWORD *)(v2 + 44) = sub_10049340();
  *(_DWORD *)(v2 + 48) = 0;
  Outpop::Utility::Thread_Mutex::Thread_Mutex((Outpop::Utility::Thread_Mutex *)(v2 + 52));
  sub_1004A040(v2 + 76, &a1);
  *(_DWORD *)(v2 + 116) = 12;
  *(_DWORD *)(v2 + 120) = 12;
  *(_DWORD *)(v2 + 128) = 0;
  *(_DWORD *)(v2 + 132) = 0;
  *(_DWORD *)(v2 + 136) = 0;
  *(_DWORD *)(v2 + 140) = 0;
  *(_DWORD *)(v2 + 144) = a2;
  *(_WORD *)(v2 + 150) = 0x7FFF;
  *(_WORD *)(v2 + 148) = 0;
  return v2;
}
