/*
 * func-name: ?KeyArrowDown@GUIConsole@@AAEXXZ_0
 * func-address: 0x102b9b60
 * callers: 0x10011ae0
 * callees: 0x1000c789
 */

void __thiscall GUIConsole::KeyArrowDown(GUIConsole *this)
{
  int v2; // eax
  char *v3; // ecx
  unsigned int v4; // ebx
  char *v5; // esi
  int v6; // eax
  int v7; // [esp-4h] [ebp-10h]

  v2 = *((_DWORD *)this + 33);
  v3 = (char *)this + 128;
  if ( v2 )
    v2 = (*((_DWORD *)v3 + 2) - v2) / 28;
  v4 = *((_DWORD *)this + 7);
  if ( v4 == v2 - 1 )
  {
    v5 = (char *)this + 144;
    std::string::operator=((char *)this + 144, this);
LABEL_9:
    *((_DWORD *)this + 47) = std::string::length(v5);
    return;
  }
  v6 = *((_DWORD *)v3 + 1);
  if ( v6 )
    v6 = (*((_DWORD *)v3 + 2) - v6) / 28;
  if ( v4 <= v6 - 1 )
  {
    *((_DWORD *)this + 7) = v4 + 1;
    v5 = (char *)this + 144;
    v7 = sub_1000C789(v4 + 1);
    std::string::operator=((char *)this + 144, v7);
    goto LABEL_9;
  }
}
