/*
 * func-name: sub_101B8D00
 * func-address: 0x101b8d00
 * callers: 0x101b7f20
 * callees: 0x1009ac30, 0x101a2500
 */

void __cdecl sub_101B8D00()
{
  int v0; // [esp+4h] [ebp-8h] BYREF

  sub_1009AC30((int)&_registry, &v0, (int)&_registry, *(_DWORD *)dword_10285888, (int)&_registry, (int)dword_10285888);
  operator delete(dword_10285888);
  dword_10285888 = 0;
  dword_1028588C = 0;
}
