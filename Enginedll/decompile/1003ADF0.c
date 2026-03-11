/*
 * func-name: sub_1003ADF0
 * func-address: 0x1003adf0
 * callers: 0x1003af90
 * callees: 0x1003a4c0, 0x1003c7f0, 0x10049250, 0x100492d0
 */

unsigned int __userpurge sub_1003ADF0@<eax>(int *a1@<ecx>, int a2@<ebp>, int a3)
{
  unsigned int result; // eax
  int Name; // eax
  char v5; // bl
  int v6; // eax
  int v7; // eax
  char v8; // bl
  _BYTE v10[4]; // [esp+18h] [ebp-60h] BYREF
  _BYTE v11[24]; // [esp+1Ch] [ebp-5Ch] BYREF
  _BYTE v12[28]; // [esp+34h] [ebp-44h] BYREF
  _BYTE v13[28]; // [esp+50h] [ebp-28h] BYREF
  int v14; // [esp+74h] [ebp-4h]
  int retaddr; // [esp+78h] [ebp+0h]

  result = (*(__int16 (__thiscall **)(int))(*(_DWORD *)a3 + 12))(a3) - 1;
  if ( !result )
  {
    Name = XMLSystem::GetName(v12, a3);
    v14 = 0;
    v5 = std::operator==<char>(Name, "Node");
    v14 = -1;
    std::string::~string(v12);
    if ( v5 )
    {
      result = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)a3 + 164))(a3, L"Name");
      if ( result )
      {
        result = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)a3 + 164))(a3, L"NodeType");
        if ( result )
        {
          v6 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)a3 + 164))(a3, L"Name", 0);
          XMLSystem::GetString(v11, v6, a2);
          retaddr = 1;
          if ( (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)a3 + 164))(a3, L"WorldBoxMin") )
          {
            if ( (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)a3 + 164))(a3, L"WorldBoxMax") )
              *(_DWORD *)sub_1003C7F0(v10) = a3;
          }
          v14 = -1;
          return std::string::~string(v10);
        }
      }
    }
    else
    {
      v7 = XMLSystem::GetName(v13, a3);
      v14 = 2;
      v8 = std::operator==<char>(v7, "MaterialList");
      v14 = -1;
      result = std::string::~string(v13);
      if ( v8 )
        return sub_1003A4C0(a1, a3, a1 + 7);
    }
  }
  return result;
}
