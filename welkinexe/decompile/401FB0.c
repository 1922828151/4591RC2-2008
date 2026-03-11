/*
 * func-name: sub_401FB0
 * func-address: 0x401fb0
 * callers: 0x40100f
 * callees: none
 */

HWND __cdecl sub_401FB0(HINSTANCE hInstance, int nCmdShow)
{
  HWND result; // eax
  HWND v3; // esi

  dword_406134 = (int)hInstance;
  result = CreateWindowExW(0, &ClassName, &Buffer, 0x10CA0000u, 0x80000000, 0, 0x80000000, 0, 0, 0, hInstance, 0);
  v3 = result;
  hWnd = result;
  if ( result )
  {
    ShowWindow(result, nCmdShow);
    UpdateWindow(v3);
    return (HWND)1;
  }
  return result;
}
