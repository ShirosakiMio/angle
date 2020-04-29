// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml and gl_angle_ext.xml.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// validationES31_autogen.h:
//   Validation functions for the OpenGL ES 3.1 entry points.

#ifndef LIBANGLE_VALIDATION_ES31_AUTOGEN_H_
#define LIBANGLE_VALIDATION_ES31_AUTOGEN_H_

#include "common/PackedEnums.h"

namespace gl
{
class Context;

bool ValidateActiveShaderProgram(const Context *context,
                                 ProgramPipelineID pipelinePacked,
                                 ShaderProgramID programPacked);
bool ValidateBindImageTexture(const Context *context,
                              GLuint unit,
                              TextureID texturePacked,
                              GLint level,
                              GLboolean layered,
                              GLint layer,
                              GLenum access,
                              GLenum format);
bool ValidateBindProgramPipeline(const Context *context, ProgramPipelineID pipelinePacked);
bool ValidateBindVertexBuffer(const Context *context,
                              GLuint bindingindex,
                              BufferID bufferPacked,
                              GLintptr offset,
                              GLsizei stride);
bool ValidateCreateShaderProgramv(const Context *context,
                                  ShaderType typePacked,
                                  GLsizei count,
                                  const GLchar *const *strings);
bool ValidateDeleteProgramPipelines(const Context *context,
                                    GLsizei n,
                                    const ProgramPipelineID *pipelinesPacked);
bool ValidateDispatchCompute(const Context *context,
                             GLuint num_groups_x,
                             GLuint num_groups_y,
                             GLuint num_groups_z);
bool ValidateDispatchComputeIndirect(const Context *context, GLintptr indirect);
bool ValidateDrawArraysIndirect(const Context *context,
                                PrimitiveMode modePacked,
                                const void *indirect);
bool ValidateDrawElementsIndirect(const Context *context,
                                  PrimitiveMode modePacked,
                                  DrawElementsType typePacked,
                                  const void *indirect);
bool ValidateFramebufferParameteri(const Context *context,
                                   GLenum target,
                                   GLenum pname,
                                   GLint param);
bool ValidateGenProgramPipelines(const Context *context,
                                 GLsizei n,
                                 const ProgramPipelineID *pipelinesPacked);
bool ValidateGetBooleani_v(const Context *context,
                           GLenum target,
                           GLuint index,
                           const GLboolean *data);
bool ValidateGetFramebufferParameteriv(const Context *context,
                                       GLenum target,
                                       GLenum pname,
                                       const GLint *params);
bool ValidateGetMultisamplefv(const Context *context,
                              GLenum pname,
                              GLuint index,
                              const GLfloat *val);
bool ValidateGetProgramInterfaceiv(const Context *context,
                                   ShaderProgramID programPacked,
                                   GLenum programInterface,
                                   GLenum pname,
                                   const GLint *params);
bool ValidateGetProgramPipelineInfoLog(const Context *context,
                                       ProgramPipelineID pipelinePacked,
                                       GLsizei bufSize,
                                       const GLsizei *length,
                                       const GLchar *infoLog);
bool ValidateGetProgramPipelineiv(const Context *context,
                                  ProgramPipelineID pipelinePacked,
                                  GLenum pname,
                                  const GLint *params);
bool ValidateGetProgramResourceIndex(const Context *context,
                                     ShaderProgramID programPacked,
                                     GLenum programInterface,
                                     const GLchar *name);
bool ValidateGetProgramResourceLocation(const Context *context,
                                        ShaderProgramID programPacked,
                                        GLenum programInterface,
                                        const GLchar *name);
bool ValidateGetProgramResourceName(const Context *context,
                                    ShaderProgramID programPacked,
                                    GLenum programInterface,
                                    GLuint index,
                                    GLsizei bufSize,
                                    const GLsizei *length,
                                    const GLchar *name);
bool ValidateGetProgramResourceiv(const Context *context,
                                  ShaderProgramID programPacked,
                                  GLenum programInterface,
                                  GLuint index,
                                  GLsizei propCount,
                                  const GLenum *props,
                                  GLsizei bufSize,
                                  const GLsizei *length,
                                  const GLint *params);
bool ValidateGetTexLevelParameterfv(const Context *context,
                                    TextureTarget targetPacked,
                                    GLint level,
                                    GLenum pname,
                                    const GLfloat *params);
bool ValidateGetTexLevelParameteriv(const Context *context,
                                    TextureTarget targetPacked,
                                    GLint level,
                                    GLenum pname,
                                    const GLint *params);
bool ValidateIsProgramPipeline(const Context *context, ProgramPipelineID pipelinePacked);
bool ValidateMemoryBarrier(const Context *context, GLbitfield barriers);
bool ValidateMemoryBarrierByRegion(const Context *context, GLbitfield barriers);
bool ValidateProgramUniform1f(const Context *context,
                              ShaderProgramID programPacked,
                              UniformLocation locationPacked,
                              GLfloat v0);
bool ValidateProgramUniform1fv(const Context *context,
                               ShaderProgramID programPacked,
                               UniformLocation locationPacked,
                               GLsizei count,
                               const GLfloat *value);
bool ValidateProgramUniform1i(const Context *context,
                              ShaderProgramID programPacked,
                              UniformLocation locationPacked,
                              GLint v0);
bool ValidateProgramUniform1iv(const Context *context,
                               ShaderProgramID programPacked,
                               UniformLocation locationPacked,
                               GLsizei count,
                               const GLint *value);
bool ValidateProgramUniform1ui(const Context *context,
                               ShaderProgramID programPacked,
                               UniformLocation locationPacked,
                               GLuint v0);
bool ValidateProgramUniform1uiv(const Context *context,
                                ShaderProgramID programPacked,
                                UniformLocation locationPacked,
                                GLsizei count,
                                const GLuint *value);
bool ValidateProgramUniform2f(const Context *context,
                              ShaderProgramID programPacked,
                              UniformLocation locationPacked,
                              GLfloat v0,
                              GLfloat v1);
bool ValidateProgramUniform2fv(const Context *context,
                               ShaderProgramID programPacked,
                               UniformLocation locationPacked,
                               GLsizei count,
                               const GLfloat *value);
bool ValidateProgramUniform2i(const Context *context,
                              ShaderProgramID programPacked,
                              UniformLocation locationPacked,
                              GLint v0,
                              GLint v1);
bool ValidateProgramUniform2iv(const Context *context,
                               ShaderProgramID programPacked,
                               UniformLocation locationPacked,
                               GLsizei count,
                               const GLint *value);
bool ValidateProgramUniform2ui(const Context *context,
                               ShaderProgramID programPacked,
                               UniformLocation locationPacked,
                               GLuint v0,
                               GLuint v1);
bool ValidateProgramUniform2uiv(const Context *context,
                                ShaderProgramID programPacked,
                                UniformLocation locationPacked,
                                GLsizei count,
                                const GLuint *value);
bool ValidateProgramUniform3f(const Context *context,
                              ShaderProgramID programPacked,
                              UniformLocation locationPacked,
                              GLfloat v0,
                              GLfloat v1,
                              GLfloat v2);
bool ValidateProgramUniform3fv(const Context *context,
                               ShaderProgramID programPacked,
                               UniformLocation locationPacked,
                               GLsizei count,
                               const GLfloat *value);
bool ValidateProgramUniform3i(const Context *context,
                              ShaderProgramID programPacked,
                              UniformLocation locationPacked,
                              GLint v0,
                              GLint v1,
                              GLint v2);
bool ValidateProgramUniform3iv(const Context *context,
                               ShaderProgramID programPacked,
                               UniformLocation locationPacked,
                               GLsizei count,
                               const GLint *value);
bool ValidateProgramUniform3ui(const Context *context,
                               ShaderProgramID programPacked,
                               UniformLocation locationPacked,
                               GLuint v0,
                               GLuint v1,
                               GLuint v2);
bool ValidateProgramUniform3uiv(const Context *context,
                                ShaderProgramID programPacked,
                                UniformLocation locationPacked,
                                GLsizei count,
                                const GLuint *value);
bool ValidateProgramUniform4f(const Context *context,
                              ShaderProgramID programPacked,
                              UniformLocation locationPacked,
                              GLfloat v0,
                              GLfloat v1,
                              GLfloat v2,
                              GLfloat v3);
bool ValidateProgramUniform4fv(const Context *context,
                               ShaderProgramID programPacked,
                               UniformLocation locationPacked,
                               GLsizei count,
                               const GLfloat *value);
bool ValidateProgramUniform4i(const Context *context,
                              ShaderProgramID programPacked,
                              UniformLocation locationPacked,
                              GLint v0,
                              GLint v1,
                              GLint v2,
                              GLint v3);
bool ValidateProgramUniform4iv(const Context *context,
                               ShaderProgramID programPacked,
                               UniformLocation locationPacked,
                               GLsizei count,
                               const GLint *value);
bool ValidateProgramUniform4ui(const Context *context,
                               ShaderProgramID programPacked,
                               UniformLocation locationPacked,
                               GLuint v0,
                               GLuint v1,
                               GLuint v2,
                               GLuint v3);
bool ValidateProgramUniform4uiv(const Context *context,
                                ShaderProgramID programPacked,
                                UniformLocation locationPacked,
                                GLsizei count,
                                const GLuint *value);
bool ValidateProgramUniformMatrix2fv(const Context *context,
                                     ShaderProgramID programPacked,
                                     UniformLocation locationPacked,
                                     GLsizei count,
                                     GLboolean transpose,
                                     const GLfloat *value);
bool ValidateProgramUniformMatrix2x3fv(const Context *context,
                                       ShaderProgramID programPacked,
                                       UniformLocation locationPacked,
                                       GLsizei count,
                                       GLboolean transpose,
                                       const GLfloat *value);
bool ValidateProgramUniformMatrix2x4fv(const Context *context,
                                       ShaderProgramID programPacked,
                                       UniformLocation locationPacked,
                                       GLsizei count,
                                       GLboolean transpose,
                                       const GLfloat *value);
bool ValidateProgramUniformMatrix3fv(const Context *context,
                                     ShaderProgramID programPacked,
                                     UniformLocation locationPacked,
                                     GLsizei count,
                                     GLboolean transpose,
                                     const GLfloat *value);
bool ValidateProgramUniformMatrix3x2fv(const Context *context,
                                       ShaderProgramID programPacked,
                                       UniformLocation locationPacked,
                                       GLsizei count,
                                       GLboolean transpose,
                                       const GLfloat *value);
bool ValidateProgramUniformMatrix3x4fv(const Context *context,
                                       ShaderProgramID programPacked,
                                       UniformLocation locationPacked,
                                       GLsizei count,
                                       GLboolean transpose,
                                       const GLfloat *value);
bool ValidateProgramUniformMatrix4fv(const Context *context,
                                     ShaderProgramID programPacked,
                                     UniformLocation locationPacked,
                                     GLsizei count,
                                     GLboolean transpose,
                                     const GLfloat *value);
bool ValidateProgramUniformMatrix4x2fv(const Context *context,
                                       ShaderProgramID programPacked,
                                       UniformLocation locationPacked,
                                       GLsizei count,
                                       GLboolean transpose,
                                       const GLfloat *value);
bool ValidateProgramUniformMatrix4x3fv(const Context *context,
                                       ShaderProgramID programPacked,
                                       UniformLocation locationPacked,
                                       GLsizei count,
                                       GLboolean transpose,
                                       const GLfloat *value);
bool ValidateSampleMaski(const Context *context, GLuint maskNumber, GLbitfield mask);
bool ValidateTexStorage2DMultisample(const Context *context,
                                     TextureType targetPacked,
                                     GLsizei samples,
                                     GLenum internalformat,
                                     GLsizei width,
                                     GLsizei height,
                                     GLboolean fixedsamplelocations);
bool ValidateUseProgramStages(const Context *context,
                              ProgramPipelineID pipelinePacked,
                              GLbitfield stages,
                              ShaderProgramID programPacked);
bool ValidateValidateProgramPipeline(const Context *context, ProgramPipelineID pipelinePacked);
bool ValidateVertexAttribBinding(const Context *context,
                                 AttributeLocation attribindexPacked,
                                 GLuint bindingindex);
bool ValidateVertexAttribFormat(const Context *context,
                                AttributeLocation attribindexPacked,
                                GLint size,
                                VertexAttribType typePacked,
                                GLboolean normalized,
                                GLuint relativeoffset);
bool ValidateVertexAttribIFormat(const Context *context,
                                 AttributeLocation attribindexPacked,
                                 GLint size,
                                 VertexAttribType typePacked,
                                 GLuint relativeoffset);
bool ValidateVertexBindingDivisor(const Context *context, GLuint bindingindex, GLuint divisor);
}  // namespace gl

#endif  // LIBANGLE_VALIDATION_ES31_AUTOGEN_H_
