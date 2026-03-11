/*
 * func-name: XInputSetState
 * func-address: 0x10019744
 * callers: 0x10002cf0
 * callees: none
 */

// attributes: thunk
DWORD __stdcall XInputSetState(DWORD dwUserIndex, XINPUT_VIBRATION *pVibration)
{
  return __imp_XInputSetState(dwUserIndex, pVibration);
}
