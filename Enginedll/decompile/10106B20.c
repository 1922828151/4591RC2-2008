/*
 * func-name: ?Instance@PostProcess@@SAPAV1@XZ
 * func-address: 0x10106b20
 * callers: 0x10106b80, 0x10106ce0, 0x101077c0, 0x10108190, 0x101083b0, 0x10108550, 0x10122050, 0x1012f5d0, 0x10131750, 0x10139150, 0x10139890, 0x1013e1c0, 0x1013e2e0
 * callees: 0x101069e0, 0x101a26a0
 */

struct PostProcess *__cdecl PostProcess::Instance()
{
  if ( (dword_1124105C & 1) == 0 )
  {
    dword_1124105C |= 1u;
    PostProcess::PostProcess((PostProcess *)&unk_11241008);
    atexit(sub_101B9100);
  }
  return (struct PostProcess *)&unk_11241008;
}
