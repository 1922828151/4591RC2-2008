/*
 * func-name: sub_100327F0
 * func-address: 0x100327f0
 * callers: 0x1002cbf0
 * callees: 0x10034dc0, 0x10035540, 0x10049340
 */

int __stdcall sub_100327F0(int a1, int a2)
{
  int v2; // esi

  v2 = a1;
  sub_10034DC0(a1, &a1);
  *(_DWORD *)(v2 + 44) = sub_10049340();
  *(_DWORD *)(v2 + 48) = 0;
  Outpop::Utility::Thread_Mutex::Thread_Mutex((Outpop::Utility::Thread_Mutex *)(v2 + 52));
  sub_10035540(v2 + 76, &a1);
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
