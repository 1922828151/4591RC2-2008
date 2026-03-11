/*
 * func-name: ?ReadParameter@XMLSystem@@QAE_NAAW4Type@EditorVar@@PAEPAVDOMNode@xercesc_2_5@@AAHAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1004a8d0
 * callers: 0x10038ca0, 0x1003a4c0, 0x10040990, 0x10042bf0, 0x10044ab0, 0x10045740, 0x10047d90, 0x100e6db0
 * callees: 0x10016f70, 0x100492d0, 0x100497b0, 0x10049860, 0x10049910, 0x10049a00, 0x10049c70, 0x10049e00, 0x1004a6e0, 0x10097800
 */

char __userpurge XMLSystem::ReadParameter@<al>(
        XMLSystem *this@<ecx>,
        int *a2,
        int a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7)
{
  int *v8; // eax
  int String; // eax
  struct xercesc_2_5::DOMNode *v10; // edi
  const char *v11; // eax
  int *v13; // eax
  int v14; // eax
  float *Vector2; // eax
  float *Vector; // eax
  float *Vector4; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  char v21; // [esp-1Ch] [ebp-70h] BYREF
  char *v22; // [esp+0h] [ebp-54h]
  float v23; // [esp+10h] [ebp-44h] BYREF
  _BYTE v24[24]; // [esp+14h] [ebp-40h] BYREF
  _BYTE v25[28]; // [esp+2Ch] [ebp-28h] BYREF
  int v26; // [esp+50h] [ebp-4h]
  int retaddr; // [esp+54h] [ebp+0h]

  v8 = (int *)(*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)a4 + 164))(a4, L"Name", 0);
  String = XMLSystem::GetString((int)v24, v8, v22);
  std::string::operator=(a7, String);
  retaddr = -1;
  std::string::~string(v24);
  v10 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)a4 + 164))(a4, L"Value");
  if ( !v10 )
  {
    v11 = (const char *)std::string::c_str(a7);
    Warning("XMLSystem: No Value for '%s'", v11);
    return 0;
  }
  v13 = (int *)(*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)a4 + 164))(a4, L"Type");
  XMLSystem::GetString((int)&v21, v13, 0);
  *a2 = EditorVar::FromString(v21);
  *a5 = 0;
  v14 = *a2;
  if ( *a2 == 1 )
  {
    *(_BYTE *)a3 = XMLSystem::GetBool(this, v10, 0);
    *a5 = 1;
  }
  else if ( v14 == 2 )
  {
    *(_DWORD *)a3 = XMLSystem::GetInt(this, v10, 0);
    *a5 = 4;
  }
  else if ( v14 == 3 )
  {
    *(float *)a3 = XMLSystem::GetFloat(this, v10, 0);
    *a5 = 4;
  }
  else if ( v14 == 4 )
  {
    Vector2 = XMLSystem::GetVector2(&v23, (int *)v10, 0);
    *(float *)a3 = *Vector2;
    *(float *)(a3 + 4) = Vector2[1];
    *a5 = 8;
  }
  else
  {
    if ( v14 != 5 )
    {
      if ( v14 == 6 )
      {
        Vector4 = XMLSystem::GetVector4(&v23, (int *)v10, 0);
      }
      else
      {
        if ( v14 == 11 )
        {
          v18 = XMLSystem::GetString((int)&v23, (int *)v10, 0);
          v26 = 1;
          std::string::operator=(a3, v18);
          v26 = -1;
          std::string::~string(&v23);
          *a5 = std::string::length(a3) + 2;
          return 1;
        }
        if ( v14 == 8 )
        {
          v19 = XMLSystem::GetString((int)&v23, (int *)v10, 0);
          v26 = 2;
          std::string::operator=(a3, v19);
          v26 = -1;
          std::string::~string(&v23);
          *a5 = std::string::length(a3) + 2;
          return 1;
        }
        if ( v14 != 12 )
        {
          if ( v14 == 9 )
          {
            v20 = XMLSystem::GetString((int)v25, (int *)v10, 0);
            v26 = 3;
            std::string::operator=(a3 + 100, v20);
            v26 = -1;
            std::string::~string(v25);
            *a5 = 156;
          }
          return 1;
        }
        Vector4 = XMLSystem::GetFloatColor(&v23, (int *)v10, 0);
      }
      *(float *)a3 = *Vector4;
      *(float *)(a3 + 4) = Vector4[1];
      *(float *)(a3 + 8) = Vector4[2];
      *(float *)(a3 + 12) = Vector4[3];
      *a5 = 16;
      return 1;
    }
    Vector = XMLSystem::GetVector(&v23, (int *)v10, 0);
    *(float *)a3 = *Vector;
    *(float *)(a3 + 4) = Vector[1];
    *(float *)(a3 + 8) = Vector[2];
    *a5 = 12;
  }
  return 1;
}
