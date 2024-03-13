// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.
// ------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Runtime Version: 15.0.0.0
//  
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
// ------------------------------------------------------------------------------
namespace XamlGen.Templates.Code.Framework.Headers
{
    using System.Linq;
    using System.Text;
    using System.Collections.Generic;
    using OM;
    using System;
    
    /// <summary>
    /// Class to produce the template output
    /// </summary>
    [global::System.CodeDom.Compiler.GeneratedCodeAttribute("Microsoft.VisualStudio.TextTemplating", "15.0.0.0")]
    public partial class InterfaceForwarder : CppCodeGenerator<ClassDefinition>
    {
        /// <summary>
        /// Create the template output
        /// </summary>
        public override string TransformText()
        {
            this.Write("\r\n");
 if (Model.IdlClassInfo.HasPrimaryInterface) { 
            this.Write("template<typename impl_type>\r\nclass interface_forwarder< ");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.IdlClassInfo.FullInterfaceName)));
            this.Write(", impl_type> final\r\n    : public ctl::iinspectable_forwarder_base< ");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.IdlClassInfo.FullInterfaceName)));
            this.Write(", impl_type>\r\n{\r\n    impl_type* This() { return this->This_helper<impl_type>(); }" +
                    "\r\n");
     foreach (PropertyDefinition prop in Model.IdlClassInfo.PublicInstanceProperties.OrderBy(prop => prop.Name)) {
            if(!prop.VersionedAccessors || prop.GetterVersion == Model.Version){
                MethodDefinition getter = prop.GetGetMethod(); 
            this.Write("    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<MethodForwarder>(ForwarderMethodModel.Public(getter))));
            this.Write("\r\n");
          } 
          if (!prop.IsReadOnly && prop.SetterModifier != Modifier.Internal && prop.SetterModifier != Modifier.Private && (!prop.VersionedAccessors || prop.SetterVersion == Model.Version)) {
                MethodDefinition setter = prop.GetSetMethod(); 
            this.Write("    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<MethodForwarder>(ForwarderMethodModel.Public(setter))));
            this.Write("\r\n");
          }
       }
       foreach (MethodDefinition method in Model.IdlClassInfo.PublicInstanceMethods.OrderBy(method => method.Name)) { 
            this.Write("    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<MethodForwarder>(ForwarderMethodModel.Public(method))));
            this.Write("\r\n");
     }
       foreach (EventDefinition evt in Model.IdlClassInfo.PublicInstanceEvents.OrderBy(evt => evt.Name)) { 
            this.Write("    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<MethodForwarder>(ForwarderMethodModel.Public(evt.GetAddMethod()))));
            this.Write("\r\n    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<MethodForwarder>(ForwarderMethodModel.Public(evt.GetRemoveMethod()))));
            this.Write("\r\n");
     } 
            this.Write("};\r\n");
 }
   if (Model.IdlClassInfo.HasProtectedMembers) { 
            this.Write("template<typename impl_type>\r\nclass interface_forwarder< ");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.IdlClassInfo.FullProtectedMembersInterfaceName)));
            this.Write(", impl_type> final\r\n    : public ctl::iinspectable_forwarder_base< ");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.IdlClassInfo.FullProtectedMembersInterfaceName)));
            this.Write(", impl_type>\r\n{\r\n    impl_type* This() { return this->This_helper<impl_type>(); }" +
                    "\r\n");
     foreach (PropertyDefinition prop in Model.IdlClassInfo.ProtectedProperties.OrderBy(prop => prop.Name)) {
           MethodDefinition getter = prop.GetGetMethod(); 
            this.Write("    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<MethodForwarder>(ForwarderMethodModel.Protected(getter))));
            this.Write("\r\n");
         if (!prop.IsReadOnly) {
               MethodDefinition setter = prop.GetSetMethod(); 
            this.Write("    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<MethodForwarder>(ForwarderMethodModel.Protected(setter))));
            this.Write("\r\n");
         }
       }
       foreach (MethodDefinition method in Model.IdlClassInfo.ProtectedMethods.OrderBy(method => method.Name)) { 
            this.Write("    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<MethodForwarder>(ForwarderMethodModel.Protected(method))));
            this.Write("\r\n");
     }
       foreach (EventDefinition evt in Model.IdlClassInfo.ProtectedEvents.OrderBy(evt => evt.Name)) { 
            this.Write("    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<MethodForwarder>(ForwarderMethodModel.Protected(evt.GetAddMethod()))));
            this.Write("\r\n    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<MethodForwarder>(ForwarderMethodModel.Protected(evt.GetRemoveMethod()))));
            this.Write("\r\n");
     } 
            this.Write("};\r\n");
 }
   if (Model.IdlClassInfo.HasVirtualMembers) { 
            this.Write("template<typename impl_type>\r\nclass interface_forwarder< ");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.IdlClassInfo.FullVirtualMembersInterfaceName)));
            this.Write(", impl_type> final\r\n    : public ctl::iinspectable_forwarder_base< ");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.IdlClassInfo.FullVirtualMembersInterfaceName)));
            this.Write(", impl_type>\r\n{\r\n    impl_type* This() { return this->This_helper<impl_type>(); }" +
                    "\r\n");
     foreach (PropertyDefinition prop in Model.IdlClassInfo.VirtualProperties.OrderBy(prop => prop.Name)) {
           MethodDefinition getter = prop.GetGetMethod(); 
            this.Write("    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<MethodForwarder>(ForwarderMethodModel.Virtual(getter))));
            this.Write("\r\n");
         if (!prop.IsReadOnly) {
               MethodDefinition setter = prop.GetSetMethod(); 
            this.Write("    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<MethodForwarder>(ForwarderMethodModel.Virtual(setter))));
            this.Write("\r\n");
         }
       }
       foreach (MethodDefinition method in Model.IdlClassInfo.VirtualMethods.OrderBy(method => method.Name)) { 
            this.Write("    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<MethodForwarder>(ForwarderMethodModel.Virtual(method))));
            this.Write("\r\n");
     }
       foreach (EventDefinition evt in Model.IdlClassInfo.VirtualEvents.OrderBy(evt => evt.Name)) { 
            this.Write("    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<MethodForwarder>(ForwarderMethodModel.Virtual(evt.GetAddMethod()))));
            this.Write("\r\n    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<MethodForwarder>(ForwarderMethodModel.Virtual(evt.GetRemoveMethod()))));
            this.Write("\r\n");
     } 
            this.Write("};\r\n");
 } 
            return this.GenerationEnvironment.ToString();
        }
    }
}