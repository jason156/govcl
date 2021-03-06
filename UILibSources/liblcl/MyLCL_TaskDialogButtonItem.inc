
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function TaskDialogButtonItem_Create(AOwner: TCollection): TTaskDialogButtonItem; extdecl;
begin
  Result :=  TTaskDialogButtonItem.Create(AOwner);
end;

procedure TaskDialogButtonItem_Free(AObj: TTaskDialogButtonItem); extdecl;
begin
  AObj.Free;
end;

function TaskDialogButtonItem_GetNamePath(AObj: TTaskDialogButtonItem): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure TaskDialogButtonItem_Assign(AObj: TTaskDialogButtonItem; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function TaskDialogButtonItem_ClassType(AObj: TTaskDialogButtonItem): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function TaskDialogButtonItem_ClassName(AObj: TTaskDialogButtonItem): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function TaskDialogButtonItem_InstanceSize(AObj: TTaskDialogButtonItem): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function TaskDialogButtonItem_InheritsFrom(AObj: TTaskDialogButtonItem; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function TaskDialogButtonItem_Equals(AObj: TTaskDialogButtonItem; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function TaskDialogButtonItem_GetHashCode(AObj: TTaskDialogButtonItem): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function TaskDialogButtonItem_ToString(AObj: TTaskDialogButtonItem): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function TaskDialogButtonItem_GetModalResult(AObj: TTaskDialogButtonItem): TModalResult; extdecl;
begin
  Result :=  AObj.ModalResult;
end;

procedure TaskDialogButtonItem_SetModalResult(AObj: TTaskDialogButtonItem; AValue: TModalResult); extdecl;
begin
  AObj.ModalResult := AValue;
end;

function TaskDialogButtonItem_GetCaption(AObj: TTaskDialogButtonItem): PChar; extdecl;
begin
  Result :=  PChar(AObj.Caption);
end;

procedure TaskDialogButtonItem_SetCaption(AObj: TTaskDialogButtonItem; AValue: PChar); extdecl;
begin
  AObj.Caption := AValue;
end;

function TaskDialogButtonItem_GetDefault(AObj: TTaskDialogButtonItem): LongBool; extdecl;
begin
  Result :=  AObj.Default;
end;

procedure TaskDialogButtonItem_SetDefault(AObj: TTaskDialogButtonItem; AValue: LongBool); extdecl;
begin
  AObj.Default := AValue;
end;

function TaskDialogButtonItem_GetCollection(AObj: TTaskDialogButtonItem): TCollection; extdecl;
begin
  Result :=  AObj.Collection;
end;

procedure TaskDialogButtonItem_SetCollection(AObj: TTaskDialogButtonItem; AValue: TCollection); extdecl;
begin
  AObj.Collection := AValue;
end;

function TaskDialogButtonItem_GetIndex(AObj: TTaskDialogButtonItem): Integer; extdecl;
begin
  Result :=  AObj.Index;
end;

procedure TaskDialogButtonItem_SetIndex(AObj: TTaskDialogButtonItem; AValue: Integer); extdecl;
begin
  AObj.Index := AValue;
end;

function TaskDialogButtonItem_GetDisplayName(AObj: TTaskDialogButtonItem): PChar; extdecl;
begin
  Result :=  PChar(AObj.DisplayName);
end;

procedure TaskDialogButtonItem_SetDisplayName(AObj: TTaskDialogButtonItem; AValue: PChar); extdecl;
begin
  AObj.DisplayName := AValue;
end;

function TaskDialogButtonItem_StaticClassType: TClass; extdecl;
begin
  Result := TTaskDialogButtonItem;
end;

exports
  TaskDialogButtonItem_Create,
  TaskDialogButtonItem_Free,
  TaskDialogButtonItem_GetNamePath,
  TaskDialogButtonItem_Assign,
  TaskDialogButtonItem_ClassType,
  TaskDialogButtonItem_ClassName,
  TaskDialogButtonItem_InstanceSize,
  TaskDialogButtonItem_InheritsFrom,
  TaskDialogButtonItem_Equals,
  TaskDialogButtonItem_GetHashCode,
  TaskDialogButtonItem_ToString,
  TaskDialogButtonItem_GetModalResult,
  TaskDialogButtonItem_SetModalResult,
  TaskDialogButtonItem_GetCaption,
  TaskDialogButtonItem_SetCaption,
  TaskDialogButtonItem_GetDefault,
  TaskDialogButtonItem_SetDefault,
  TaskDialogButtonItem_GetCollection,
  TaskDialogButtonItem_SetCollection,
  TaskDialogButtonItem_GetIndex,
  TaskDialogButtonItem_SetIndex,
  TaskDialogButtonItem_GetDisplayName,
  TaskDialogButtonItem_SetDisplayName,
  TaskDialogButtonItem_StaticClassType;

