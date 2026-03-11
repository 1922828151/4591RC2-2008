/*
 * func-name: ?REGetGlobalDialogResourceManager@@YAPAVCREDialogResourceManager@@XZ
 * func-address: 0x100b5280
 * callers: 0x100b52e0, 0x100b5550, 0x100b55d0, 0x100b56d0, 0x100b5710, 0x100b5820, 0x100b5850, 0x100b5e40, 0x100b62e0, 0x100b66a0, 0x100b6890, 0x100b6bc0, 0x100b6f70, 0x100baf70, 0x100bb510, 0x100bbba0, 0x100bbf70, 0x100bc320, 0x100bc4f0, 0x100bc680, 0x100bd330, 0x100bd450, 0x100bda20, 0x100bdb80, 0x100bf520, 0x100bf690, 0x100bf870, 0x100c0990, 0x100c0c50, 0x100c1ce0, 0x100c3320, 0x100c3910, 0x100c3b20, 0x100c3c90, 0x100c4990, 0x100c4b70, 0x100c4d20, 0x100c5520, 0x100c68a0, 0x100c6b30, 0x100c6de0, 0x100c8fd0, 0x101543d0
 * callees: 0x101a26a0
 */

struct CREDialogResourceManager *__cdecl REGetGlobalDialogResourceManager()
{
  if ( (dword_11240B40 & 1) == 0 )
  {
    dword_11240B40 |= 1u;
    dword_11240B24 = 0;
    dword_11240B28 = 0;
    dword_11240B2C = 0;
    dword_11240B30 = 0;
    dword_11240B34 = 0;
    dword_11240B38 = 0;
    dword_11240B3C = 0;
    dword_11240B1C = 0;
    dword_11240B20 = 0;
    atexit(sub_101B8F70);
  }
  return (struct CREDialogResourceManager *)&dword_11240B1C;
}
