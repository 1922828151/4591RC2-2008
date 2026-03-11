/*
 * func-name: sub_4021B0
 * func-address: 0x4021b0
 * callers: 0x40101e
 * callees: none
 */

ATOM __cdecl sub_4021B0(HINSTANCE hInstance)
{
  WNDCLASSEXW v2; // [esp+4h] [ebp-30h] BYREF

  v2.cbSize = 48;
  v2.style = 11;
  v2.lpfnWndProc = sub_401014;
  v2.cbClsExtra = 0;
  v2.cbWndExtra = 0;
  v2.hInstance = hInstance;
  v2.hIcon = LoadIconW(hInstance, (LPCWSTR)0x8C);
  v2.hCursor = LoadCursorW(0, (LPCWSTR)0x7F00);
  v2.hbrBackground = (HBRUSH)4;
  v2.lpszMenuName = (LPCWSTR)&unk_404627;
  v2.lpszClassName = &ClassName;
  v2.hIconSm = LoadIconW(hInstance, (LPCWSTR)0x8D);
  return RegisterClassExW(&v2);
}
