/*
 * func-name: sub_101B7F20
 * func-address: 0x101b7f20
 * callers: none
 * callees: 0x10057610, 0x101a26a0
 */

int sub_101B7F20()
{
  dword_10285888 = sub_10057610();
  *((_BYTE *)dword_10285888 + 45) = 1;
  *((_DWORD *)dword_10285888 + 1) = dword_10285888;
  *(_DWORD *)dword_10285888 = dword_10285888;
  *((_DWORD *)dword_10285888 + 2) = dword_10285888;
  dword_1028588C = 0;
  return atexit(sub_101B8D00);
}
