<title>SUV - Login</title>
<link rel="stylesheet" type="text/css" href="<?php echo Yii::app()->request->baseUrl; ?>/css/lib/reset.css"/>
<link rel="stylesheet" type="text/css" href="<?php echo Yii::app()->request->baseUrl; ?>/css/base.css" />
<link rel="stylesheet" type="text/css" href="<?php echo Yii::app()->request->baseUrl; ?>/css/login.css" />
<div class="background">	
	<div class="login-pane">
		<a href="<?php echo Yii::app()->request->baseUrl; ?>"><h1 class="logo"><?php echo CHtml::encode(Yii::app()->name); ?></h1></a>
		<h2 class="moto">Enjoy game every day</h2>
		<div class="form">
			<?php $form=$this->beginWidget('CActiveForm', array(
				'id'=>'login-form',
				'enableClientValidation'=>true,
				'clientOptions'=>array(
					'validateOnSubmit'=>true,
				),
			)); ?>

			<div class="icon-input">
				<span class="username-icon"></span>
				<?php echo $form->textField($model, 'username', array('placeholder' => 'username')); ?>
				<?php echo $form->error($model,'username'); ?>
			</div>

			<div class="icon-input">
				<span class="password-icon"></span>
				<?php echo $form->passwordField($model,'password', array('placeholder' => 'password')); ?>
				<?php echo $form->error($model,'password'); ?>
			</div>

			<div class="right-btn">
				<?php echo CHtml::submitButton('Login'); ?>
			</div>

			<?php $this->endWidget(); ?>
		</div><!-- form -->
	</div>	
</div>