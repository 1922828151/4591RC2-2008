/*
 * func-name: ?GetTechnique@Shader@@QAEPBDV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x101203c0
 * callers: 0x10018780, 0x10106ce0, 0x1012ffd0
 * callees: 0x101189f0
 */

int __thiscall Shader::GetTechnique(_DWORD **this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  struct RenderDevice *v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  double v13; // st7
  int v14; // eax
  int v15; // esi
  int v16; // eax
  int v17; // esi
  int v18; // esi
  int v19; // eax
  int v20; // eax
  int v21; // esi
  int v22; // eax
  int v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // eax
  int v27; // esi
  int v28; // eax
  struct RenderDevice *v30; // [esp+24h] [ebp-48h]
  _BYTE v31[28]; // [esp+28h] [ebp-44h] BYREF
  _BYTE v32[28]; // [esp+44h] [ebp-28h] BYREF
  int v33; // [esp+68h] [ebp-4h]

  v33 = 0;
  v9 = RenderDevice::Instance();
  v30 = v9;
  if ( std::string::find(&a2, "_PS11", 0) != -1 )
  {
    v10 = std::string::find(&a2, "_PS11", 0);
    std::string::erase(&a2, v10, 5);
  }
  if ( std::string::find(&a2, "_PS20", 0) != -1 )
  {
    v11 = std::string::find(&a2, "_PS20", 0);
    std::string::erase(&a2, v11, 5);
  }
  if ( std::string::find(&a2, "_PS30", 0) != -1 )
  {
    v12 = std::string::find(&a2, "_PS30", 0);
    std::string::erase(&a2, v12, 5);
  }
  std::string::string(v31, &a2);
  v13 = *((float *)v9 + 411);
  LOBYTE(v33) = 1;
  if ( v13 >= 1.1 )
  {
    if ( *((float *)v9 + 411) >= 2.0 )
    {
      if ( *((float *)v9 + 411) >= 3.0 )
      {
        v14 = std::operator+<char>(v32, v31, "_PS30");
        LOBYTE(v33) = 5;
      }
      else
      {
        v14 = std::operator+<char>(v32, v31, "_PS20");
        LOBYTE(v33) = 4;
      }
    }
    else
    {
      v14 = std::operator+<char>(v32, v31, "_PS11");
      LOBYTE(v33) = 3;
    }
  }
  else
  {
    v14 = std::operator+<char>(v32, v31, "_FFP");
    LOBYTE(v33) = 2;
  }
  std::string::operator=(v31, v14);
  LOBYTE(v33) = 1;
  std::string::~string(v32);
  v15 = *this[4];
  v16 = std::string::c_str(v31);
  v17 = (*(int (__stdcall **)(_DWORD *, int))(v15 + 52))(this[4], v16);
  if ( !v17 )
  {
    v18 = *this[4];
    v19 = std::string::c_str(&a2);
    v17 = (*(int (__stdcall **)(_DWORD *, int))(v18 + 52))(this[4], v19);
    if ( !v17 )
    {
      if ( *((float *)v30 + 411) < 2.0
        || (v20 = std::operator+<char>(v32, &a2, "_PS20"),
            v21 = *this[4],
            LOBYTE(v33) = 6,
            v22 = std::string::c_str(v20),
            v17 = (*(int (__stdcall **)(_DWORD *, int))(v21 + 52))(this[4], v22),
            LOBYTE(v33) = 1,
            std::string::~string(v32),
            !v17) )
      {
        if ( *((float *)v30 + 411) < 1.1
          || (v23 = std::operator+<char>(v32, &a2, "_PS11"),
              v24 = *this[4],
              LOBYTE(v33) = 7,
              v25 = std::string::c_str(v23),
              v17 = (*(int (__stdcall **)(_DWORD *, int))(v24 + 52))(this[4], v25),
              LOBYTE(v33) = 1,
              std::string::~string(v32),
              !v17) )
        {
          v26 = std::operator+<char>(v32, &a2, "_FFP");
          v27 = *this[4];
          LOBYTE(v33) = 8;
          v28 = std::string::c_str(v26);
          v17 = (*(int (__stdcall **)(_DWORD *, int))(v27 + 52))(this[4], v28);
          LOBYTE(v33) = 1;
          std::string::~string(v32);
        }
      }
    }
  }
  LOBYTE(v33) = 0;
  std::string::~string(v31);
  v33 = -1;
  std::string::~string(&a2);
  return v17;
}
