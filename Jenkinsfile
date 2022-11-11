pipeline{
    agent any
    stages {
        stage('Build'){
            steps{
                echo 'Building Makefile'
                sh 'make code'
                sh './main'
            }
        }
    }
}