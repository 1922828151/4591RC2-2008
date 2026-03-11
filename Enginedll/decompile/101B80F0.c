/*
 * func-name: sub_101B80F0
 * func-address: 0x101b80f0
 * callers: none
 * callees: 0x10013a60, 0x101a26a0
 */

int sub_101B80F0()
{
  char v1; // [esp-24h] [ebp-28h] BYREF
  int v2; // [esp-20h] [ebp-24h]
  int v3; // [esp-1Ch] [ebp-20h]
  int v4; // [esp-18h] [ebp-1Ch]
  int v5; // [esp-14h] [ebp-18h]
  int v6; // [esp-10h] [ebp-14h]
  int v7; // [esp-Ch] [ebp-10h]
  int v8; // [esp-8h] [ebp-Ch]
  int v9; // [esp-4h] [ebp-8h]
  char *v10; // [esp+0h] [ebp-4h]

  v9 = 1;
  v8 = 0;
  v10 = &v1;
  std::string::string(&v1, "ActorInstancer");
  Factory::Factory((char *)&dword_102878EC, v1, v2, v3, v4, v5, v6, v7, v8, v9);
  dword_102878EC = (int)&TypedFactory<ActorInstancer>::`vftable';
  return atexit(sub_101B8CC0);
}
