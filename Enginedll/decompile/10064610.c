/*
 * func-name: ?Instance@Canvas@@SAPAV1@XZ
 * func-address: 0x10064610
 * callers: 0x10088cd0, 0x10093cc0, 0x10094d10, 0x100a0220, 0x100a9db0, 0x100d5f50, 0x100da280, 0x100ee670, 0x10102180, 0x1012f5d0, 0x10137580, 0x101385a0, 0x10145a20, 0x10148e60, 0x1015e240, 0x1016c260, 0x1016c4c0
 * callees: none
 */

struct Canvas *__cdecl Canvas::Instance()
{
  return Canvas::m_Instance;
}
