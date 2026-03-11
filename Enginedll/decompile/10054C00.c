/*
 * func-name: ?Instance@AudioDevice@@SAPAV1@XZ
 * func-address: 0x10054c00
 * callers: 0x1006a7e0, 0x100958f0, 0x10096550, 0x10097ea0, 0x100c7390, 0x100cbde0, 0x10109eb0, 0x10109f50, 0x1010b610, 0x1010b790, 0x1010bd80, 0x1010be70, 0x1010d330, 0x1012ffd0
 * callees: none
 */

struct AudioDevice *__cdecl AudioDevice::Instance()
{
  return AudioDevice::m_Instance;
}
